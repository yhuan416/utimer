# utimer

一个简易计时器, 用于一些对时间精度要求不高的场景.


## 编译

``` sh
mkdir -p build && cd build
cmake ..
make
```

## 移植

``` c
> src/utimer_impl.c

修改该函数, 返回一个当前时间的毫秒数
uint64_t utimer_get_time_ms_impl(void) {
    // ...
}
```
