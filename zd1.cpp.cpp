#include <iostream>/*підключаю бібліотеки*/
#include <time.h>
#include <iomanip>
using namespace std;
int main() 
{
    int r = 0, c = 0, a1 = 0, a2 = 0;
    int tmp;/*створюю тимчасову зміну*/
    const int rows = 15, cols = 2, num = 18;/*створюю константу*/
    int ar[rows][cols], ar1[num], ar2[num];/*створюю цикл*/
    srand(time(0));/*створюю точку відліку для генеруваня випадкових чисел*/
    cout << "rows: " << rows << "\ncols: " << cols << "\n";
    for (int i = 0; i < rows; i++) {/*заповнюю масив рендомними числами*/
        for (int j = 0; j < cols; j++) {
            ar[i][j] = rand() % 101 - 50;
        }
    }
    for (int i = 0; i < rows; i++) {/*виводжу на екран початковий масив*/
        for (int j = 0; j < cols; j++) {
            cout << setw(5) << ar[i][j];
        }
        cout << "\n";
    }
    cout << "\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (ar[i][j] <= 0) {
                ar1[a1] = ar[i][j];
                a1++;
            }
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (ar[i][j] > 0) {
                ar2[a2] = ar[i][j];
                a2++;
            }
        }
    }
    for (int i = 0; i < a1; i++) {
        for (int j = a1 - 1; j > 0; j--) {
            if (ar1[j - 1] > ar1[j]) {
                tmp = ar1[j];
                ar1[j] = ar1[j - 1];
                ar1[j - 1] = tmp;
            }
        }
    }
    for (int i = 0; i < a2; i++) {
        for (int j = a2 - 1; j > 0; j--) {
            if (ar2[j - 1] > ar2[j]) {
                tmp = ar2[j];
                ar2[j] = ar2[j - 1];
                ar2[j - 1] = tmp;
            }
        }
    }
        int ii = 0, ii1 = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (ii1 < a2 && ii == a1) {
                    cout << setw(5) << ar2[ii1];
                    ii1++;
                }
                if (ii < a1) {
                    cout << setw(5) << ar1[ii];
                    ii++;
                }
            }
            cout << "\n";
        }
    system("pause");
}