#!/bin/bash

# Compile the Floyd-Warshall algorithm
g++ -Wall -Wextra /Users/honeyreddy/CLionProjects/DAA-tasks/Task-5/Floydalgorithm.cpp -o /Users/honeyreddy/CLionProjects/DAA-tasks/Task-5/floyd_executable

# Run it and capture output
echo "=== Floyd-Warshall Algorithm Output ===" > /Users/honeyreddy/CLionProjects/DAA-tasks/Task-5/floyd_output.txt
/Users/honeyreddy/CLionProjects/DAA-tasks/Task-5/floyd_executable >> /Users/honeyreddy/CLionProjects/DAA-tasks/Task-5/floyd_output.txt 2>&1

# Show the output
cat /Users/honeyreddy/CLionProjects/DAA-tasks/Task-5/floyd_output.txt

