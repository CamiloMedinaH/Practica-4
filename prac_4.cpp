#include "prac_4.h"
#include <iostream>
#include <map>
#include <queue>
#include <list>
#include <limits>

/*list<char> dijkstra(const Network& network, char source, char dest) {
    map<char, int> dist;
    map<char, char> prev;
    priority_queue<pair<int, char>> pq;
    list<char> path;

    // Initialize distance and previous node maps
    for (auto& node : network) {
        dist[node.first] = numeric_limits<int>::max();
        prev[node.first] = 0;
    }

    // Set distance to source node to 0 and push it to the priority queue
    dist[source] = 0;
    pq.push(make_pair(0, source));

    // Dijkstra's algorithm
    while (!pq.empty()) {
        char u = pq.top().second;
        pq.pop();

        if (u == dest) {
            // Destination node reached, build path list and return it
            while (prev[u] != 0) {
                path.push_front(u);
                u = prev[u];
            }
            path.push_front(source);
            return path;
        }

        for (auto& v : network.at(u)) {
            char neighbor = v.first;
            int weight = v.second;

            int alt = dist[u] + weight;
            if (alt < dist[neighbor]) {
                dist[neighbor] = alt;
                prev[neighbor] = u;
                pq.push(make_pair(-alt, neighbor));
            }
        }
    }

    // Destination node not reachable
    return path;
}*/
