// #include <iostream>
// using namespace std;
// int main()
// {
//     int r1, c1, r2, c2,k, A[10][10], B[10][10], AB[10][10];

// start:
//     cout << "Enter the rows and columns of the matrix 1 : ";
//     cin >> r1 >> c1;
//     cout << "Enter the rows and columns of the matrix 2 : ";
//     cin >> r2 >> c2;
//     if (c1 == r2)
//     {
//         cout << "Enter the elemenst of the matrix 1 : ";
//         for (int i = 0; i < r1; i++)
//         {
//             for (int j = 0; j < c1; j++)
//             {
//                 cin >> A[i][j];
//             }
//         }
//         cout << "Enter the elemenst of the matrix 2 : ";
//         for (int i = 0; i < r2; i++)
//         {
//             for (int j = 0; j < c2; j++)
//             {
//                 cin >> B[i][j];
//             }
//         }
//     }
//     else
//     {
//         cout << "Enter the rows and columns of the matrix are not same...\n Try again...!!! \n";
//         goto start;
//     }
//     cout << "\n";
//     cout << "This is the Matrix 1 \n";
//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c1; j++)
//         {
//             cout << A[i][j] << " ";
//         }
//         cout << "\n";
//     }
//     cout << " \n";
//     cout << "This is the Matrix 2 \n";
//     for (int i = 0; i < r2; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             cout << B[i][j] << " ";
//         }
//         cout << "\n";
//     }
//     for (int i = 0; i < r1; i++)
//         {
//             for (int j = 0; j < c1; j++)
//             {
//                  AB[i][j] = 0;
//             }
//         }
//     cout<< "This is the multiply of two Matrixs \n";
//      for(int i = 0; i < r1; ++i)
//         for(int j = 0; j < c2; ++j)
//             for(k = 0; k < c1; ++k)
//             {
//                 AB[i][j] += A[i][k] * B[k][j];
//             }

//     cout<< "This is the AB Matrix \n";
//     for (int i = 0; i < r1; i++)
//         {
//             for (int j = 0; j < c1; j++)
//             {
//                 cout << AB[i][j] << " ";
//             }
//             cout << "\n";
//         }
//     return 0;
// }
