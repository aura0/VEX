# VEX code 參考文件

create by aura

變數宣告
-------------
<pre><code>變數型態 變數名稱;
int a;
float b;
double c;
</code></pre>
常見變數名稱<br>
char 字元<br>
int 整數<br>
float 單精度浮點數<br>
double 倍精度浮點數

if else判斷
-------------
<pre><code>if(判斷式){
    ...
}
else if(判斷式){
    ...
}
else{
    ...
}
</code></pre>
if<br>
可以單存在<br>
else if<br>
用於當if條件不成立時，才會檢查else if 的判斷式，可以有數個else if<br>
else<br>
一定要接在if 或 else if 後面，當前面的判斷不成立時就會進入else<br>
| 判斷      | 程式碼 |
| ---------- | ----- |
| A大於B |   A>B |
| A小於B       |  A<B |
| A等於B       |  A==B |
| A不等於B     |  A!=B |
| A大於小於B   |  A>=B |
| A大於小於B   |  A<=B |

for迴圈
-------------
<pre><code>for(起始值; 條件式; 更新值){
    ...
}
</code></pre>