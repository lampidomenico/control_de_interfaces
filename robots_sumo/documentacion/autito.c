#include <stdio.h>
#include "pico/stdlib.h"

#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5

void avanzar()
{
    gpio_put(N1, 1)
    gpio_put(N2, 0)

    gpio_put(N3, 1)
    gpio_put(N4, 0)
}
int main()
{
    stdio_init_all();

    gpio_init(N1);
    gpio_init(N2);
    gpio_init(N3);
    gpio_init(N4);

    gpio_set_dir(N1, GPIO_OUT);
    gpio_set_dir(N2, GPIO_OUT);
    gpio_set_dir(N3, GPIO_OUT);
    gpio_set_dir(N4, GPIO_OUT);

    while(true){
        avanzar();
        sleep(1000);
        
        gpio_put(N1, 0)
        gpio_put(N2, 0)

        gpio_put(N3, 0)
        gpio_put(N4, 0)

    }
}
