// week17_4_zongzi_part4
// 修改至 week17_3_zongzi_part3
// 要回收粽子, 就不會超過 100 個粽子

PImage zongzi;
void setup(){
  size(500,500);
  zongzi = loadImage("zongzi.png"); // 剛剛有把圖檔拉進程式裡
}
//float x, y; // 只有 1 顆粽子的座標
float[]x = new float[100]; //可放100個粽子
float[]y = new float[100]; //week06 陣列
int N = 0; // 一開始有 0 個粽子
void draw(){
  background(204); // 204=灰色
  imageMode(CENTER); // 畫圖, 圖片的座標, 把它設在中心點的座標, 不要用左上角
  for(int i=0; i<N; i++){
    if(x[i]>0){ // 按下 mouse 會設定 x ,y 就不會是 0 , 才畫出來
      image(zongzi, x[i], y[i], 100, 100); // 把粽子, 畫在 x, y 的座標
      y[i]++; // 座標往下, 代表粽子往下
      if(y[i]>500){ // 粽子碰到地板(h = 500), 要回收粽子(第 i 個) 把陣列右邊[搬到左邊]
        for(int k=i+1; k<N; k++){ // i+1 i+2 ... 搬到 i i+1 
          x[k-1] = x[k]; // 右邊搬到左邊
          y[k-1] = y[k];
        }
        N--; // 粽子總數 -1 
      }
    }
  }
}
void mousePressed(){ // 使用 week04 的餵飼料的方法, 讓粽子往下掉
  x[N] = mouseX;
  y[N] = mouseY;
  N++; 
}
