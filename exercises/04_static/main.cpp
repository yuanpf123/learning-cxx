#include "../exercise.h"

// READ: `static` 关键字 <https://zh.cppreference.com/w/cpp/language/storage_duration>
// THINK: 这个函数的两个 `static` 各自的作用是什么？
static int func(int param) {
    static int static_ = param;  //初始化语句，静态局部变量在程序的整个运行期间只有一次初始化
    // static_ = 10;   // 通过赋值语句更新其值
    static_++;          // 通过赋值语句更新其值
    // std::cout << "static_ = " << static_ << std::endl;
    return static_;
}

int main(int argc, char **argv) {
    // TODO: 将下列 `?` 替换为正确的数字
    ASSERT(func(5) == 6, "static variable value incorrect");
    ASSERT(func(4) == 7, "static variable value incorrect");
    ASSERT(func(3) == 8, "static variable value incorrect");
    ASSERT(func(2) == 9, "static variable value incorrect");
    ASSERT(func(1) == 10, "static variable value incorrect");
    return 0;
}
