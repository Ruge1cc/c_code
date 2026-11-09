#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // 数组大小设为100，足够存50!（约65位）
    // 数组低位存数字低位，比如 123 存在数组里是 [3, 2, 1]
    int fact[100] = {0}; // 存储当前的阶乘（如 5!）
    int sum[100] = {0};  // 存储阶乘之和
    fact[0] = 1;         // 初始阶乘为 1
    int fact_len = 1;    // 阶乘的当前位数
    int sum_len = 1;     // 和的当前位数

    for (int i = 1; i <= n; i++) {
        // 1. 高精度乘法：fact = fact * i
        int carry = 0;
        for (int j = 0; j < fact_len; j++) {
            int temp = fact[j] * i + carry;
            fact[j] = temp % 10; // 保留个位
            carry = temp / 10;   // 进位
        }
        while (carry > 0) { // 处理最后的进位
            fact[fact_len] = carry % 10;
            carry /= 10;
            fact_len++;
        }

        // 2. 高精度加法：sum = sum + fact
        carry = 0;
        int j = 0;
        // 只要阶乘还有位，或者和还有位，或者还有进位，就继续加
        while (j < fact_len || j < sum_len || carry > 0) {
            int f = (j < fact_len) ? fact[j] : 0;
            int s = (j < sum_len) ? sum[j] : 0;
            int temp = f + s + carry;
            sum[j] = temp % 10;
            carry = temp / 10;
            j++;
        }
        sum_len = j; // 更新和的位数
    }

    // 3. 反向输出结果（因为数组是低位在前）
    for (int i = sum_len - 1; i >= 0; i--) {
        printf("%d", sum[i]);
    }
    printf("\n");

    return 0;
}