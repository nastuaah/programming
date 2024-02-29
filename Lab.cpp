#include <iostream>
#include <vector>
#include <algorithm>

/*QuickSort*/
int partition(std::vector<int>& arr, int low, int high)
{
    int pivot = arr[high]; // Выбираем последний элемент как pivot
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[i + 1], arr[high]);

    return i + 1;
}
// Рандомизированный выбор pivot элемента
int randomPartition(std::vector<int>& arr, int low, int high)
{
    int n = high - low + 1;
    int pivotIndex = low + rand() % n;

    std::swap(arr[pivotIndex], arr[high]);

    return partition(arr, low, high);
}

// Рекурсивная функция QuickSort
void quickSort(std::vector<int>& arr, int low, int high)
{
    if (low < high)
    {
        int pivot = randomPartition(arr, low, high); // Выбираем pivot элемент

        quickSort(arr, low, pivot - 1); // Сортируем левую часть
        quickSort(arr, pivot + 1, high); // Сортируем правую часть
    }
}
// Функция для вывода массива на экран
void printArray(std::vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


/*BubbleSort*/
void bubbleSort(std::vector<int>& arr1) {
    int n = arr1.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr1[j] > arr1[j + 1]) {
                std::swap(arr1[j], arr1[j + 1]);
            }
        }
    }
}

/*InsertionSort*/
void insertion_sort(std::vector<int>& arr2) {
    int n = arr2.size();
    for (int i = 1; i < n; i++) {
        int key = arr2[i];
        int j = i - 1;

        while (j >= 0 && arr2[j] > key) {
            arr2[j + 1] = arr2[j];
            j--;
        }

        arr2[j + 1] = key;
    }
}

int main() {
    /*QuickSort*/
    std::vector<int> arr = { 12, 3, 6, 18, 9, 4, 15, 7 };
    int n = arr.size();
    quickSort(arr, 0, n - 1);
    std::cout << "Sorted array QuickSort: ";
    printArray(arr);

    /*BubbleSort*/
    std::vector<int> arr1 = { 64, 25, 12, 22, 11 };
    bubbleSort(arr1);
    std::cout << "Sorted array BubbleSort: ";
    for (int i = 0; i < arr1.size(); i++) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;

    /*InsertionSort*/
    std::vector<int> arr2 = { 12, 5, 3, 7, 8, 9 };
    insertion_sort(arr2);

    std::cout << "Sorted array InsertionSort: ";
    for (int num : arr2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}