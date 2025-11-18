#include <iostream>
using namespace std;

bool solveMaze(bool maze[10][10], int n, int x, int y, int sol[10][10]) {
    // Out of bounds
    if (x < 0 || x >= n || y < 0 || y >= n) return false;

    // Wall or already visited
    if (maze[x][y] == true || sol[x][y] == 1) return false;

    // If reached destination
    if (x == n - 1 && y == n - 1) {
        sol[x][y] = 1;
        return true;
    }

    // Mark current cell as part of path
    sol[x][y] = 1;

    // Try all 4 directions
    if (solveMaze(maze, n, x, y + 1, sol)) return true; // right
    if (solveMaze(maze, n, x + 1, y, sol)) return true; // down
    if (solveMaze(maze, n, x, y - 1, sol)) return true; // left
    if (solveMaze(maze, n, x - 1, y, sol)) return true; // up

    // Backtrack: unmark and indicate failure from this cell
    sol[x][y] = 0;
    return false;
}

int main() {
    int n;
    cin >> n;

    bool maze[10][10];
    int sol[10][10] = {0};

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> maze[i][j];

    if (solveMaze(maze, n, 0, 0, sol)) {
        cout << "Path found:\n";
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) cout << sol[i][j] << " ";
            cout << '\n';
        }
    } else {
        cout << "No path exists\n";
    }
    return 0;
}
