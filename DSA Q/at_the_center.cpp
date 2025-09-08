/*
Problem Statement
Alice is playing a game where she is at the origin point (0,0) on a 2D plane and wants to distribute K books to the people closest to her (one to each). There are N other people on the plane, each located at specific coordinates.

Your task is to identify and output the coordinates of the K people who are nearest to Alice.

Input Format
The first line contains an integer N, the number of people on the plane.

The next N lines each contain two integers representing the x and y coordinates of each person.

The final line contains an integer K, the number of books Alice wants to distribute.

Output Format
Print the coordinates of the K people who are closest to Alice.

Constraints
0 <= K <= N <= 10^2

-10^4 <= x, y <= 10^4

Sample Testcase 0
Testcase Input
2
1 3
-1 1
1
Testcase Output
-1 1
Explanation
The closest point is -1, 1.
Sample Testcase 1
Testcase Input
3
1 1
2 2
3 3
1
Testcase Output
1 1
Explanation
The distance between (1, 1) and the origin is sqrt (2).
The distance between (2, 2) and the origin is sqrt (8).
The distance between (3, 3) and the origin is sqrt (18).
Since sqrt (2) is closer to the origin.
We only want the closest k = 1 points from the origin, so the answer is just [[1,1]].
Companies
Topics
Discussion Channel
*/

 int N;
    cin >> N;

    vector<pair<int, int>> points(N);
    for (int i = 0; i < N; i++) {
        cin >> points[i].first >> points[i].second;
    }

    int K;
    cin >> K;

    // Sort points by squared distance to origin
    sort(points.begin(), points.end(), [](pair<int,int>& a, pair<int,int>& b){
        long long distA = 1LL*a.first*a.first + 1LL*a.second*a.second;
        long long distB = 1LL*b.first*b.first + 1LL*b.second*b.second;
        return distA < distB;
    });

    // Print first K closest points
    for (int i = 0; i < K; i++) {
        cout << points[i].first << " " << points[i].second << endl;
    }