// 成绩: 10 / 折扣: 0.8
// 走进世博园某信息通信馆，参观者将获得前所未有的尖端互动体验，一场充满创想和喜悦的信息通信互动体验秀将以全新形式呈现，从观众踏入展馆的第一步起，就将与手持终端密不可分，人类未来梦想的惊喜从参观者的掌上展开。

// 在等候区的梦想花园中，参观者便开始了他们奇妙的体验之旅，等待中的游客可利用手机等终端参与互动小游戏，与梦想剧场内的虚拟人物Kr. Kong 进行猜数比赛。当屏幕出现一个整数X（1<=X<=1000）时，若你能比Kr. Kong更快的发出对应X的最接近它的素数答案，你将会获得一个意想不到的礼物。
// 例如：当屏幕出现22时，你的回答应是23；当屏幕出现8时，你的回答应是7；若X本身是素数，则回答X;若最接近X的素数有两个时，则回答大于它的素数。#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false; 
    }
    return true; 
}
int closestPrime(int x) {
    if (isPrime(x)) return x;
    int lower = x - 1, upper = x + 1;
    while (lower >= 2 && !isPrime(lower)) {
        lower--;
    }
    while (!isPrime(upper)) {
        upper++;
    }
    if ((x - lower) < (upper - x)) {
        return lower;
    } else {
        return upper;
    }
}
int main() {
    int x;
    scanf("%d", &x);
    int result = closestPrime(x);
    printf("%d\n", result);
    return 0;
}
