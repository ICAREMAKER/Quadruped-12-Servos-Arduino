# Quadruped-12-Servos-Arduino

![PCA9685](https://github.com/user-attachments/assets/1c1ff992-436c-489c-8b16-f4a543172447)

## Pattern
![2](https://github.com/ICAREMAKER/Arduino---Fonts/assets/107696317/294aeadf-ec10-41d8-8bdc-544a334ee61b)

```C
void DEUX()
{
  byte image2[] =
{
   B00000000,   
   B10000010,
   B11000011,
   B11110001,
   B10111001,
   B10011111,
   B10001110,
   B00000000
};
  for (int i = 0; i < 8; i++)
  {
    lc.setRow(0,i,image2[i]);
  }
}
```
