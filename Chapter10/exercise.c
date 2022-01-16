/**
 * @file exercise.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief   第10章课后习题
 * @version 0.1
 * @date 2022-01-16
 *
 * @copyright Copyright (c) 2022
 *
 */

/* 复习题
1．下面的程序将打印什么内容？
#include <stdio.h>

int main(void)
{
    int ref[] = {8, 4, 0, 2};
    int *ptr;
    int index;

    for (index = 0, ptr = ref; index < 4; index++, ptr++)
        printf("%d %d\n", ref[index], *ptr);

    return 0;
}
8 8
4 4
0 0
2 2

2．在复习题1中，ref有多少个元素？
答案：4个；

3．在复习题1中，ref的地址是什么？ref + 1是什么意思？++ref指向什么？
答案：ref是第一个元素的地址，ref + 1指向第二个元素地址，++ref无效表达式。

4．在下面的代码中，*ptr和*(ptr + 2)的值分别是什么？
a.
int *ptr;
int torf[2][2] = {12, 14, 16};
ptr = torf[0];
*ptr=12,*(ptr+2)=16;

b.
int *ptr;
int fort[2][2] = {{12}, {14, 16}};
ptr = fort[0];
*ptr=12,*(ptr+2)=14;

5．在下面的代码中，**ptr和**(ptr + 1)的值分别是什么？　　
a．
int (*ptr)[2];
int torf[2][2] = {12, 14, 16};
ptr = torf;　　
**ptr=12,**(ptr + 1)=16;

b．
int (*ptr)[2];
int fort[2][2] = { {12}, {14,16} };
ptr = fort;
**ptr=12,**(ptr + 1)=14;

6．假设有下面的声明：
int grid[30][100];　　
a．用1种写法表示grid[22][56]的地址　　&grid[22][56];
b．用2种写法表示grid[22][0] 的地址　　grid[22];
c．用3种写法表示grid[0][0] 的地址       grid;

7．正确声明以下各变量：　　
a．digits是一个内含10个int类型值的数组　　int digits[10];
b．rates是一个内含6个foat类型值的数组　　float rates[6];
c．mat是一个内含3个元素的数组，每个元素都是内含5个整数的数组    int mat[3][5];　　
d．psa是一个内含20个元素的数组，每个元素都是指向char的指针　　char *psa[20];
e．pstr是一个指向数组的指针，该数组内含20个char类型的值     char (*pstr)[20];

8．　　
a．声明一个内含6个int类型值的数组，并初始化各元素为1、2、4、8、16、32　　
int arr[6]={1,2,4,8,16,32};
b．用数组表示法表示a声明的数组的第3个元素（其值为4）　　
arr[2];
c．假设编译器支持C99/C11标准，声明一个内含100个int类型值的数组，并初始化最后一个元素为-1，其他元素不考虑　　
int arr[100]={[99]=-1};
d．假设编译器支持C99/C11标准，声明一个内含100个int类型值的数组，并初始化下标为5、10、11、12、13的元素为101，其他元素不考虑
int arr[100]={[5]=101,[10]=101,101,101,101};

9．内含10个元素的数组下标范围是什么？
答案：0-9.

10．假设有下面的声明：
float rootbeer[10], things[10][5], *pf, value = 2.2;
int i = 3;
判断以下各项是否有效：　　
a．rootbeer[2] = value;　　有效
b．scanf("%f", &rootbeer );　　无效
c．rootbeer = value;　　无效
d．printf("%f", rootbeer);　　无效
e．things[4][4] = rootbeer[3];　　有效
f．things[5] = rootbeer;　　无效
g．pf = value;　　无效
h．pf = rootbeer;   有效

11．声明一个800×600的int类型数组。
答案：int arr[800][600];

12．下面声明了3个数组：
double trots[20];
short clops[10[30];
long shots[5][10][15];
a．分别以传统方式和以变长数组为参数的方式编写处理trots数组的void函数原型和函数调用　　
void trots(double* arr,int n);void trots(int n,double arr[n]);
b．分别以传统方式和以变长数组为参数的方式编写处理clops数组的void函数原型和函数调用　　
void clops(short arr[][30],int x,int y);void trots(int x,int y,double arr[x][y]);
c．分别以传统方式和以变长数组为参数的方式编写处理shots数组的void函数原型和函数调用
void shots(long arr[][10][15],int x,int y,int z);void trots(int x,int y,int z,double arr[x][y][z]);

13．下面有两个函数原型：
void show(const double ar[], int n);//n是数组元素的个数
void show2(const double ar2[][3], int n);//n是二维数组的行数
a．编写一个函数调用，把一个内含8、3、9和2的复合字面量传递给show()函数。　　
show((double []){8,3,9,2},4);
b．编写一个函数调用，把一个2行3列的复合字面量（8、3、9作为第1行，5、4、1作为第2行）传递给show2()函数。
show2((double [2][3]){{8,3,9},{5,4,1}},2);
*/

/* 编程习题 */
#include <stdio.h>

void exercise_1(void);
void exercise_2(void);
void exercise_3(void);
void exercise_4(void);
void exercise_5(void);
void exercise_6(void);
void exercise_7(void);
void exercise_8(void);
void exercise_9(void);
void exercise_10(void);
void exercise_11(void);
void exercise_12(void);
void exercise_13(void);
void exercise_14(void);

int main(void)
{
    // exercise_1();
    // exercise_2();
    // exercise_3();
    // exercise_4();
    // exercise_5();
    // exercise_6();
    // exercise_7();
    // exercise_8();
    // exercise_9();
    // exercise_10();
    // exercise_11();
    // exercise_12();
    // exercise_13();
    exercise_14();

    return 0;
}

#define MONTHS 12
#define YEARS 5
void exercise_1(void)
{
    // 1．修改程序清单10.7的rain.c程序，用指针进行计算（仍然要声明并初始化数组）。
    const float rain[YEARS][MONTHS] = {
        {4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}};
    int month;
    float subtot, total;
    const float(*pYear)[MONTHS] = rain;
    const float *pMonth;

    printf("YEAR    RAINFALL    (inches)\n");
    total = 0;
    while (pYear < rain + YEARS)
    {
        subtot = 0;
        pMonth = *pYear;
        while (pMonth < *pYear + MONTHS)
        {
            subtot += *pMonth;
            ++pMonth;
        }
        printf("%5ld %15.1f\n", 2010 + (pYear - rain), subtot);
        total += subtot;
        ++pYear;
    }
    printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
    for (month = 0; month < MONTHS; month++)
    {
        subtot = 0;
        pYear = rain;
        while (pYear < rain + YEARS)
        {
            subtot += *(*pYear + month);
            ++pYear;
        }
        printf("%4.1f", subtot / YEARS);
    }
    printf("\n");
}

void copy_arr(double dest[5], double src[5], int count)
{
    int i;

    for (i = 0; i < count; i++)
        dest[i] = src[i];
}

void copy_ptr(double *dest, double *src, int count)
{
    double *end = src + count;

    while (src < end)
        *dest++ = *src++;
}

void copy_ptrs(double *dest, double *src, double *end)
{
    while (src < end)
        *dest++ = *src++;
}

void exercise_2(void)
{
    // 2．编写一个程序，初始化一个double类型的数组，然后把该数组的内容拷贝至3个其他数组中（在main()中声明这4个数组）。
    //使用带数组表示法的函数进行第1份拷贝。使用带指针表示法和指针递增的函数进行第2份拷贝。
    //把目标数组名、源数组名和待拷贝的元素个数作为前两个函数的参数。
    //第3个函数以目标数组名、源数组名和指向源数组最后一个元素后面的元素的指针。
    //也就是说，给定以下声明，则函数调用如下所示：
    // double source[5]={1.1,2.2,3.3,4.4,5.5};
    // double target1[5];
    // double target2[5];
    // double target3[5];
    // copy_arr(target1, source, 5);
    // copy_ptr(target2, source, 5);
    // copy_ptrs(target3,source,source + 5);
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5], target2[5], target3[5];

    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);
}

int arr_max(int *arr, int n)
{
    int temp = 0;
    int *end = arr + n;

    while (arr < end)
    {
        if (*arr > temp)
            temp = *arr;
        arr++;
    }

    return temp;
}

void exercise_3(void)
{
    // 3．编写一个函数，返回存储在int类型数组中的最大值，并在一个简单的程序中测试该函数。
    int arr[] = {1, 2, 6, 231, 21, 5564, 136, 111, 566, 224};

    printf("max = %d\n", arr_max(arr, sizeof(arr) / sizeof(arr[0])));
}

int max_index(double *arr, int count)
{
    double *begin, *max;

    begin = max = arr;
    while (arr < (begin + count))
    {
        if (*arr > *max)
            max = arr;
        arr++;
    }

    return max - begin;
}

void exercise_4(void)
{
    // 4．编写一个函数，返回存储在double类型数组中最大值的下标，并在一个简单的程序中测试该函数。
    double arr[] = {1, 2, 6, 231, 21, 5564, 136, 111, 566, 224};

    printf("max element index = %d\n", max_index(arr, sizeof(arr) / sizeof(arr[0])));
}

double diff(double *arr, int count)
{
    double max, min;
    double *end;

    max = min = *arr;
    end = arr + count;
    while (arr < end)
    {
        if (*arr > max)
            max = *arr;
        if (*arr < min)
            min = *arr;
        arr++;
    }

    return max - min;
}

void exercise_5(void)
{
    // 5．编写一个函数，返回存储在double类型数组中最大值和最小值的差值，并在一个简单的程序中测试该函数。
    double arr[] = {1, 2, 6, 231, 21, 5564, 136, 111, 566, 224};

    printf("max-min = %.2lf\n", diff(arr, sizeof(arr) / sizeof(arr[0])));
}

void reverse(double *arr, int count)
{
    double temp;
    double *end = arr + count;

    while (arr < (end - 1))
    {
        if (*arr > *(arr + 1))
        {
            temp = *arr;
            *arr = *(arr + 1);
            *(arr + 1) = temp;
        }
        arr++;
    }
}

void exercise_6(void)
{
    // 6．编写一个函数，把double类型数组中的数据倒序排列，并在一个简单的程序中测试该函数。
    double arr[] = {1, 2, 6, 231, 21, 5564, 136, 111, 566, 224};
    int i;

    reverse(arr, sizeof(arr) / sizeof(arr[0]));
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
        printf("%.2lf ", *(arr + i));
    printf("\n");
}

void exercise_7(void)
{
    // 7．编写一个程序，初始化一个double类型的二维数组，使用编程练习2中的一个拷贝函数把该数组中的数据拷贝至另一个二维数组中
    //（因为二维数组是数组的数组，所以可以使用处理一维数组的拷贝函数来处理数组中的每个子数组）。
    double arr[5][2] = {1, 2, 6, 231, 21, 5564, 136, 111, 566, 224};
    double target[5][2];
    int i, j;

    copy_ptrs(*target, *arr, *(arr + 5) + 2);
    for (i = 0; i < 5; i++)
        for (j = 0; j < 2; j++)
            printf("%.2lf ", *(*(target + i) + j));
    printf("\n");
}

void exercise_8(void)
{
    // 8．使用编程练习2中的拷贝函数，把一个内含7个元素的数组中第3～第5个元素拷贝至内含3个元素的数组中。
    //该函数本身不需要修改，只需要选择合适的实际参数（实际参数不需要是数组名和数组大小，只需要是数组元素的地址和待处理元素的个数）。
    double arr[7] = {1, 2, 6, 231, 21, 5564, 136};
    double target[3];
    int i;

    copy_ptrs(target, arr + 2, arr + 5);
    for (i = 0; i < sizeof(target) / sizeof(target[0]); i++)
        printf("%.2lf ", *(target + i));
    printf("\n");
}

void var_copy(int rows, int cols, const double src[rows][cols], double dest[rows][cols])
{
    int i, j;

    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            dest[i][j] = src[i][j];
}

void var_show(int rows, int cols, const double arr[rows][cols])
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%.2lf ", arr[i][j]);
        printf("\n");
    }
}

void exercise_9(void)
{
    // 9．编写一个程序，初始化一个double类型的3×5二维数组，使用一个处理变长数组的函数将其拷贝至另一个二维数组中。
    //还要编写一个以变长数组为形参的函数以显示两个数组的内容。这两个函数应该能处理任意N×M数组（如果编译器不支持变长数组，就使用传统C函数处理N×5的数组）。
    int rows = 3, cols = 5;
    const double arr[3][5] = {1, 2, 6, 231, 21, 5564, 136, 123, 5664, 223, 454, 123, 65, 75, 345};
    double dest[rows][cols];

    var_copy(rows, cols, arr, dest);
    var_show(rows, cols, arr);
    var_show(rows, cols, dest);
}

void arr_add(int *src, int *mid, int *dest, int count)
{
    int i;
    for (i = 0; i < count; i++)
    {
        *dest = *src + *mid;
        dest++, src++, mid++;
    }
}

void exercise_10(void)
{
    // 10．编写一个函数，把两个数组中相对应的元素相加，然后把结果存储到第3个数组中。
    //也就是说，如果数组1中包含的值是2、4、5、8，数组2中包含的值是1、0、4、6，
    //那么该函数把3、4、9、14赋给第3个数组。函数接受3个数组名和一个数组大小。在一个简单的程序中测试该函数。
    int src[] = {2, 4, 5, 8};
    int mid[] = {1, 0, 4, 6};
    int dest[4];
    int i;

    arr_add(src, mid, dest, sizeof(src) / sizeof(src[0]));
    for (i = 0; i < sizeof(src) / sizeof(src[0]); i++)
        printf("%d ", *(dest + i));
    printf("\n");
}

void arr_x2(int (*arr)[5], int row)
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < 5; j++)
            *(*(arr + i) + j) *= 2;
        printf("\n");
    }
}

void arr_show(int (*arr)[5], int row)
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < 5; j++)
            printf("%d ", *(*(arr + i) + j));
        printf("\n");
    }
}

void exercise_11(void)
{
    // 11．编写一个程序，声明一个int类型的3×5二维数组，并用合适的值初始化它。
    //该程序打印数组中的值，然后各值翻倍（即是原值的2倍），并显示出各元素的新值。
    //编写一个函数显示数组的内容，再编写一个函数把各元素的值翻倍。这两个函数都以数组名和行数作为参数。
    int arr[3][5] = {1, 2, 6, 231, 21, 5564, 136, 123, 5664, 223, 454, 123, 65, 75, 345};

    arr_show(arr, 3);
    arr_x2(arr, 3);
    arr_show(arr, 3);
}

void years_rain(int years, int months, const float rain[years][months])
{
    float subtot, total;
    const float(*pYear)[months] = rain;
    const float *pMonth;

    printf("YEAR    RAINFALL    (inches)\n");
    total = 0;
    while (pYear < rain + years)
    {
        subtot = 0;
        pMonth = *pYear;
        while (pMonth < *pYear + months)
        {
            subtot += *pMonth;
            ++pMonth;
        }
        printf("%5ld %15.1f\n", 2010 + (pYear - rain), subtot);
        total += subtot;
        ++pYear;
    }
    printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);
}

void month_average_rain(int years, int months, const float rain[years][months])
{
    int month;
    float subtot;
    const float(*pYear)[months] = rain;

    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
    for (month = 0; month < months; month++)
    {
        subtot = 0;
        pYear = rain;
        while (pYear < rain + years)
        {
            subtot += *(*pYear + month);
            ++pYear;
        }
        printf("%4.1f", subtot / years);
    }
}

void exercise_12(void)
{
    // 12．重写程序清单10.7的rain.c程序，把main()中的主要任务都改成用函数来完成。
    const float rain[YEARS][MONTHS] = {
        {4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}};
    years_rain(YEARS, MONTHS, rain);
    month_average_rain(YEARS, MONTHS, rain);
    printf("\n");
}

void a_arr_13(double (*arr)[5], int rows)
{
    int i, j;

    printf("Enter double array(3x5):\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < 5; j++)
            scanf("%lf", *(arr + i) + j);
}

double b_arr_13(double arr[], int cols)
{
    int i;
    double total = 0.0;

    for (i = 0; i < cols; i++)
        total += *(arr + i);

    return total / cols;
}

double c_arr_13(double arr[][5], int rows)
{
    int i, j;
    double total = 0.0;

    for (i = 0; i < rows; i++)
        for (j = 0; j < 5; j++)
            total += *(*(arr + i) + j);

    return total / (rows * 5);
}

double d_arr_13(double (*arr)[5], int rows)
{
    int i, j;
    double temp = arr[0][0];

    for (i = 0; i < rows; i++)
        for (j = 0; j < 5; j++)
            if (*(*(arr + i) + j) > temp)
                temp = *(*(arr + i) + j);

    return temp;
}

void exercise_13(void)
{
    // 13．编写一个程序，提示用户输入3组数，每组数包含5个double类型的数（假设用户都正确地响应，不会输入非数值数据）。该程序应完成下列任务。
    // a．把用户输入的数据存储在3×5的数组中　　
    // b．计算每组（5个）数据的平均值　　
    // c．计算所有数据的平均值　　
    // d．找出这15个数据中的最大值　　
    // e．打印结果
    //每个任务都要用单独的函数来完成（使用传统C处理数组的方式）。完成任务b，要编写一个计算并返回一维数组平均值的函数，
    //利用循环调用该函数3次。对于处理其他任务的函数，应该把整个数组作为参数，完成任务c和d的函数应把结果返回主调函数。
    int rows = 3, cols = 5;
    double arr[rows][cols];
    int i;

    a_arr_13(arr, rows);
    var_show(rows, cols, arr);

    for (i = 0; i < rows; i++)
        printf("row %d ,average = %.2lf\n", i, b_arr_13(*(arr + i), cols));

    printf("all average = %.2lf\n", c_arr_13(arr, rows));
    printf("max = %.2lf\n", d_arr_13(arr, rows));
}

void a_var_13(int rows, int cols, double arr[rows][cols])
{
    int i, j;

    printf("Enter double array(3x5):\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%lf", *(arr + i) + j);
}

double b_var_13(int cols, double *arr)
{
    int i;
    double total = 0.0;

    for (i = 0; i < cols; i++)
        total += *(arr + i);

    return total / cols;
}

double c_var_13(int rows, int cols, double arr[rows][cols])
{
    int i, j;
    double total = 0.0;

    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            total += *(*(arr + i) + j);

    return total / (rows * 5);
}

double d_var_13(int rows, int cols, double arr[rows][cols])
{
    int i, j;
    double temp = arr[0][0];

    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            if (*(*(arr + i) + j) > temp)
                temp = *(*(arr + i) + j);

    return temp;
}

void exercise_14(void)
{
    // 14．以变长数组作为函数形参，完成编程练习13。
    int rows = 3, cols = 5;
    double arr[rows][cols];
    int i;

    a_var_13(rows, cols, arr);
    var_show(rows, cols, arr);

    for (i = 0; i < rows; i++)
        printf("row %d ,average = %.2lf\n", i, b_var_13(cols, *(arr + i)));

    printf("all average = %.2lf\n", c_var_13(rows, cols, arr));
    printf("max = %.2lf\n", d_var_13(rows, cols, arr));
}