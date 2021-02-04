#include "main.h"
#include "gpio.h"
/* USER CODE BEGIN Includes */
#include <rtthread.h>

int main(void)
{

  MX_GPIO_Init();

  while (1)
  {
    HAL_GPIO_TogglePin(LED0_GPIO_Port, LED0_Pin);
    HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
    rt_thread_mdelay(1000);
  }
}