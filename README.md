# 超简单的超声波避障手环
### 简介
一个简单的超声波避障手环，离障碍物越近，手环震动越强烈。使用attiny85作为主控，超声波传感器是RCWL-1201。
该制作在2018年4月完成，是最初开始学习硬件的时候制作的几个小东西之一。
### 设计指标
①单方向测距，测距范围5-400cm

②检测到障碍物后触发震动提醒

③距离越近，提醒强度越强

④至少续航3-4h（最终实测其实只能连续运行2小时左右。电机一启动，电池很快就给用光了）

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
<div align="center">
	<img src="https://github.com/blackbox114/tiny_wristband/blob/master/img/0.png" alt="Editor" width="500">
</div>


### 制作过程
准备材料
<div align="center">
	<img src="/img/1.jpg" alt="Editor" width="500">
</div>

焊接导线
<div align="center">
	<img src="https://github.com/blackbox114/tiny_wristband/blob/master/img/2.jpg" alt="Editor" width="500">
</div>

组装电路部分
<div align="center">
	<img src="https://github.com/blackbox114/tiny_wristband/blob/master/img/3.jpg" alt="Editor" width="500">
</div><div align="center">
	<img src="https://github.com/blackbox114/tiny_wristband/blob/master/img/4.jpg" alt="Editor" width="500">
</div><div align="center">
	<img src="https://github.com/blackbox114/tiny_wristband/blob/master/img/5.jpg" alt="Editor" width="500">
</div>
3D打印外壳
<div align="center">
	<img src="https://github.com/blackbox114/tiny_wristband/blob/master/img/6.jpg" alt="Editor" width="500">
</div>

那会还不会建模，做出来的打印件丑爆了【悲怆】
