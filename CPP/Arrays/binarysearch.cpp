// #include <iostream>
// using namespace std;

// int main()
// {
//     int num, A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
//     cout << "Enter the number you want to find : ";
//     cin >> num;
//     int l = 0, h = 19;
//     int mid;
//     mid = (l + h) / 2;
//     for (int i = 0; i < 20; i++)
//     {
//         if (l > h)
//         {
//             cout << "Not found.";
//             return 0;
//         }

//         if (A[l] == num)
//         {
//             cout << "Found at " << l;
//             return 0;
//         }
//         else if (A[h] == num)
//         {
//             cout << "Found at " << h;
//             return 0;
//         }

//         if (num == A[mid])
//         {
//             cout << "Found at " << (l + h) / 2;
//             return 0;
//             break;
//         }
//         else if (A[mid] > num)
//         {
//             h = mid + 1;
//             mid = (l + h) / 2;
//         }
//         else
//         {
//             l = mid + 1;
//             mid = (l + h) / 2;
//         }
//     }
//     cout << "Not fount any";
//     return 0;
// }