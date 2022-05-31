#pragma once

#include <iostream>
#include <string>

typedef int العددالصحيح;
typedef double خطأكبير;
typedef float خطأصغير;
typedef bool الكذبالحقيقي;
typedef char حرفواحد;
typedef void دالة;

typedef std::string الاحرف;

#define هيكل struct
#define ثابت const
#define تكرار for
#define اللانهاية while
#define أعاد return
#define وسط main

#define ماذالو if
#define إنلميكن else if
#define اخر else

#define طريقمسدود break

#define صحيح true
#define خطأ false

#define كبير >
#define صغير <

#define أكبرأويساوي >=
#define صغيرةأوتساوي <=

#define و &&
#define أو ||

#define مماثل ==
#define مختلف !=

#define بدء {
#define النهاية }

#define إنهفارغ NULL

auto& إطلاقالطاقة = std::cout;
auto& إطلاقالمدخلات = std::cin;
auto& انتهاء = "\n";