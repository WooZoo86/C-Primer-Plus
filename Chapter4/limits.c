/**
 * @file limits.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 打印个类型的取值范围
 * @version 0.1
 * @date 2022-01-11
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("CHAR_BIT = %d,CHAR_MAX = %d, CHAR_MIN = %d\n", CHAR_BIT, CHAR_MAX, CHAR_MIN);
    printf("SCHAR_MAX = %d,SCHAR_MIN = %d\n", SCHAR_MAX, SCHAR_MIN);
    printf("UCHAR_MAX = %d,UCHAR_MIN = %d\n", UCHAR_MAX, 0);
    printf("SHRT_MAX = %d,SHRT_MIN = %d\n", SHRT_MAX, SHRT_MIN);
    printf("USHRT_MAX = %d,USHRT_MIN = %d\n", USHRT_MAX, 0);
    printf("INT_MAX = %d,INT_MIN = %d\n", INT_MAX, INT_MIN);
    printf("UINT_MAX = %u,UINT_MIN = %u\n", UINT_MAX, 0);
    printf("LONG_MAX = %ld,LONG_MIN = %ld\n", LONG_MAX, LONG_MIN);
    printf("ULONG_MAX = %lu,ULONG_MIN = 0\n", ULONG_MAX);
    printf("LONGLONG_MAX = %lld,LONGLONG_MIN = %lld\n", LLONG_MAX, LLONG_MIN);
    printf("ULLONG_MAX = %llu,ULLONG_MIN = 0\n", ULLONG_MAX);
    printf("sizeof long = %zd,long long = %zd\n", sizeof(long), sizeof(long long));

    printf("FLT_MAX = %e,FLT_MIN = %e\n", FLT_MAX, FLT_MIN);
    printf("FLT_MANT_DIG = %d,FLT_DIG = %d\n", FLT_MANT_DIG, FLT_DIG);                   //位数和有效位数宽度
    printf("FLT_MIN_10_EXP = %d,FLT_MAX_10_EXP = %d\n", FLT_MIN_10_EXP, FLT_MAX_10_EXP); //以10为底的指数取值范围
    printf("FLT_EPSILON = %e\n", FLT_EPSILON);                                           // 1.00和比其大的最小float类型之间的差值
    printf("DBL_MAX = %e,DBL_MIN = %e\n", DBL_MAX, DBL_MIN);
    printf("DBL_MANT_DIG = %d,DBL_DIG = %d\n", DBL_MANT_DIG, DBL_DIG);                   //位数和有效位数宽度
    printf("DBL_MIN_10_EXP = %d,DBL_MAX_10_EXP = %d\n", DBL_MIN_10_EXP, DBL_MAX_10_EXP); //以10为底的指数取值范围
    printf("DBL_EPSILON = %e\n", DBL_EPSILON);
    printf("LDBL_MAX = %Le,LDBL_MIN = %Le\n", LDBL_MAX, LDBL_MIN);                           // long double 只能是Lf或Le
    printf("LDBL_MANT_DIG = %d,LDBL_DIG = %d\n", LDBL_MANT_DIG, LDBL_DIG);                   //位数和有效位数宽度
    printf("LDBL_MIN_10_EXP = %d,LDBL_MAX_10_EXP = %d\n", LDBL_MIN_10_EXP, LDBL_MAX_10_EXP); //以10为底的指数取值范围
    printf("LDBL_EPSILON = %Le\n", LDBL_EPSILON);

    return 0;
}