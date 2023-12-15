/* tinh chat:
    chi so cay nhi phan ben trai: 2i + 1
    chi so cay nhi phan ben phai: 2i + 2
-> tu 1 chi so co the tim` duoc chi so cha cua cay nhi phan: (i-1)/2

- XAY DUNG MAX HEAP: heapify den cac phan tu dau tien khong phai not la' : k = (n/2)-1
NOTE: => > k -> deu` la not la' => khong can xet
NOTE: => < k -> khong phai not la' => xet' cac not nay`

- XAY DUNG HEAP SORT:
 1. xay dung max heap => phan tu lon nhat luon o goc => swap phan tu o goc voi phan tu cuoi cung`
 2. giam kich thuoc cua Heap di 1
 3. Heapify phan tu dau` tien
 4. Su dung Heapify de swap voi phan tu nao` lon hon no => sau do lai loai. ptu cuoi cung di
 5. lap lai lien tuc den khi cay nhi phan con` 1 phan tu duy nhat (ptu be nhat)
 ===> mang? duoc sap xep tu be den lon
*/

#include <iostream>
#include <algorithm>

using namespace std;
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        // de quy den chi? so co chi so trai' va phai?
        heapify(&arr[i], n, arr[largest]);
        // NOTE: vi du i = 10, left = 12 => swap i = 12, left = 10 => heapi fy left = 12 vi` left co cay nhi phan ben duoi
    }
}

void HeapSort(int a[], int n)
{
    // building max heap
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(a, n, i);
    }
    // swap phan tu lon nhat va cuoi cung` trong max heap
    for (int i = n - 1; i >= 0; i--)
    {
        swap(a[i], a[0]);
        heapify(a, i, 0);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    HeapSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}