#include <iostream>
#include <string>
int main()
{
    int arr[10000] = { 0 };
    bool flag = false;
    short n;

    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];

        int sum = 0;
        int num = arr[i];
        while (num != 0)
        {
            sum += num % 10;
            num /= 10;
        }
        if (sum == 12)
            flag = true;
    }


    if (flag)
    {
        short hl = short(n / 1.247);
        while (hl != 0)
        {
            for (int i = 0; i < n - hl; i++)
            {
                if (arr[i] > arr[i + hl])
                {
                    int buf = arr[i];
                    arr[i] = arr[i + hl];
                    arr[i + hl] = buf;
                }
            }
            hl = short(hl / 1.247);
        }
    }


    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}