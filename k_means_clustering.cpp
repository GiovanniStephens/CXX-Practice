/* This is a basic implementation of a k-means clustering algorithm.
 * The data are points in a 2D space. The goal is to find the best
 * centroids to cluster the data.
 * 
 * Author:   Giovanni Stephens
 * Date:     12/06/2022
 */

#include <vector>
#include <iostream>
#include <cmath>

float minimum(std::vector<std::vector<float>> *data) {
    float min = data->at(0).at(0);
    for (int i = 0; i < data->size(); i++) {
        for (int j = 0; j < data->at(i).size(); j++) {
            if (data->at(i).at(j) < min) {
                min = data->at(i).at(j);
            }
        }
    }
    return min;
}

float maximum(std::vector<std::vector<float>> *data) {
    float max = data->at(0).at(0);
    for (int i = 0; i < data->size(); i++) {
        for (int j = 0; j < data->at(i).size(); j++) {
            if (data->at(i).at(j) > max) {
                max = data->at(i).at(j);
            }
        }
    }
    return max;
}

std::vector<std::vector<float>> initialise_centroids(std::vector<std::vector<float>> *data, int k) {
    std::vector<std::vector<float>> centroids;
    float min = minimum(data);
    float max = maximum(data);

    for (int i = 0; i < k; i++) {
        std::vector<float> centroid;
        for (int j = 0; j < data->at(0).size(); j++) {
            centroid.push_back(min + (max - min) * (float)rand() / (float)RAND_MAX);
        }
        centroids.push_back(centroid);
    }

    return centroids;
}

float euclidian_distance(std::vector<float> x, std::vector<float> y) {
    float distance = 0;
    for (int i = 0; i < x.size(); i++) {
        distance += pow(x.at(i) - y.at(i), 2);
    }
    return sqrt(distance);
}

void update_centroid(std::vector<std::vector<float>> *data, std::vector<std::vector<float>> *centroids, std::vector<int> *clusters) {
    for (int i = 0; i < centroids->size(); i++) {
        std::vector<float> centroid;
        for (int j = 0; j < centroids->at(0).size(); j++) {
            centroid.push_back(0);
        }
        int count = 0;
        for (int j = 0; j < clusters->size(); j++) {
            if (clusters->at(j) == i) {
                for (int k = 0; k < data->at(j).size(); k++) {
                    centroid.at(k) += data->at(j).at(k);
                }
                count++;
            }
        }
        for (int j = 0; j < centroid.size(); j++) {
            centroid.at(j) /= count;
        }
        centroids->at(i) = centroid;
    }
}

int classify(std::vector<std::vector<float>> *data, std::vector<std::vector<float>> *centroids, int item) {
    int index = -1;
    float min = 1000000;
    for (int i = 0; i < centroids->size(); i++) {
        float distance = euclidian_distance(data->at(item), centroids->at(i));
        if (distance < min) {
            min = distance;
            index = i;
        }
    }
    return index;
}

std::vector<std::vector<float>> k_means(std::vector<std::vector<float>> *data, int k) {
    std::vector<std::vector<float>> centroids = initialise_centroids(data, k);
    std::vector<int> clusters(data->size(), 0);
    bool converged = false;
    while (!converged) {
        converged = true;
        for (int i = 0; i < data->size(); i++) {
            int index = classify(data, &centroids, i);
            if (index != clusters.at(i)) {
                converged = false;
            }
            clusters.at(i) = index;
        }
        update_centroid(data, &centroids, &clusters);

    }
    return centroids;
}



int main() {
    // create a 2d vector of floats with two clusters
    std::vector<std::vector<float>> data = {
        {1.0, 1.0},
        {2.0, 2.0},
        {1.0, 2.0},
        {2.0, 1.0},
        {4.0, 4.0},
        {3.0, 4.0},
        {4.0, 3.0},
        {5.0, 5.0},
        {4.0, 5.0}
    };

    // Run the k-means algorithm with k = 2
    std::vector<std::vector<float>> centroids_2 = k_means(&data, 2);
    
    // Print the centroids
    std::cout << "Centroids: " << std::endl;
    for (int i = 0; i < centroids_2.size(); i++) {
        for (int j = 0; j < centroids_2.at(i).size(); j++) {
            std::cout << centroids_2.at(i).at(j) << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}