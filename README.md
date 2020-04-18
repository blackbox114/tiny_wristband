# 超简单的超声波避障手环
### 简介
一个简单的超声波避障手环，离障碍物越近，手环震动越强烈。使用attiny85作为主控，超声波传感器是RCWL-1201。
该制作在2018年4月完成，是最初开始学习硬件的时候制作的几个小东西之一
### 设计指标
①单方向测距，测距范围5-400cm
②检测到障碍物后触发震动提醒
③距离越近，提醒强度越强
④至少续航3-4h
⑤体积尽可能小，最好做到手环大小

### 物料清单
RCWL-1201*1

Digispark（不带usbPad版本）*1

751635 380mAh锂电池*1

震动电机*1

### 接线图
  trig==>P2
  
  echo==>P3
  
  震动电机==>P1
  
  vcc==>VCC
  
  gnd==>GND
  
#### 图中元件图示型号有误，仅展示接线图，元件请参考物料清单
![image](https://github.com/blackbox114/tiny_wristband/blob/master/img/0.png)

### 制作过程
准备材料
![image](https://github.com/blackbox114/tiny_wristband/blob/master/img/1.jpg)

焊接导线
![image](https://github.com/blackbox114/tiny_wristband/blob/master/img/2.jpg)

组装电路部分
![image](https://github.com/blackbox114/tiny_wristband/blob/master/img/3.jpg)
![image](https://github.com/blackbox114/tiny_wristband/blob/master/img/4.jpg)
![image](https://github.com/blackbox114/tiny_wristband/blob/master/img/5.jpg)

3D打印外壳
![image](https://github.com/blackbox114/tiny_wristband/blob/master/img/6.jpg)

那会还不会建模，做出来的打印件丑爆了【悲怆】
