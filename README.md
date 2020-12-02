# VEX code 參考文件

create by aura

動作指令
---
### 馬達旋轉  
<pre><code>MotorName.spin(方向);</code></pre>
方向有兩種：
* forward 正轉
* reverse 反轉

### 停止馬達  
<pre><code>MotorName.stop();</code></pre>

### 設定停止模式  
<pre><code>MotorName.setStopping(形式);</code></pre>
形式有三種：  
* break 剎車，會慢慢減速  
* hold 鎖住，直接固定住  
* coast 放開，完全不會剎車，就讓馬達自然滾到停止  

### 設定馬達轉速  
<pre><code>MotorName.setVelocity(數值, 單位);</code></pre>
單位有兩種： 
* precent 百分比，數值需介在 0 ~ 100 之間  
* rpm 每分鐘轉速，數值就是轉速  

|馬達顏色|最大轉數|
|--|--|
|紅色|100rpm|
|綠色|200rpm|
|藍色|600rpm|

### 設定馬達扭力  
<pre><code>MotorName.setMaxTorque(數值,percent);</code></pre>
扭力數值需介在 0 ~ 100 之間


### 設定馬達角度  
<pre><code>MotorName.setPosition(數值, 單位);</code></pre>
單位有兩種：
* drgrees 角度
* turns 圈數，一圈 = 360度

### 設定馬達角度  
<pre><code>MotorName.spinFor(方向, 數值, 單位); </code></pre>
方向有兩種：
* forward 正轉
* reverse 反轉

單位有兩種：
* drgrees 角度
* turns 圈數，一圈 = 360度


控制指令
-------------
### 變數宣告
<pre><code>變數型態 變數名稱;
int a;
float b;
double c;
</code></pre>
常見變數名稱  
char 字元  
int 整數  
float 單精度浮點數  
double 倍精度浮點數

### if else判斷
<pre><code>if(條件式){
    ...
}
else if(條件式){
    ...
}
else{
    ...
}
</code></pre>
if  
可以單獨存在  
else if  
用於當if條件不成立時，才會檢查else if 的判斷式，可以有數個else if  
else  
一定要接在if 或 else if 後面，當前面的判斷不成立時就會進入else  
| 判斷      | 程式碼 |
| ---------- | ----- |
| A大於B |   A>B |
| A小於B       |  A<B |
| A等於B       |  A==B |
| A不等於B     |  A!=B |
| A大於小於B   |  A>=B |
| A大於小於B   |  A<=B |

### for迴圈
<pre><code>for(起始值; 條件式; 更新值){
    ...
}
</code></pre>