 LiquidCrystal圖書館-Hello World
演示使用16x2 LCD顯示器。液晶
 該庫可與所有兼容
Hitachi HD44780驅動程序。有很多在那裡，而你
 通常可以通過16針接口告訴他們。
此草圖打印“ Hello World！” 到液晶屏
 並顯示時間。
  電路：
 * LCD RS引腳到數字引腳12
 * LCD使能引腳到數字引腳11
 * LCD D4引腳到數字引腳5
 * LCD D5引腳到數字引腳4
 * LCD D6引腳到數字引腳3
 * LCD D7引腳到數字引腳2
 * LCD R / W引腳接地
 * LCD VSS引腳接地
 * LCD VCC引腳為5V
 * 10K電阻：
 *終止於+ 5V並接地
 *刮水器至LCD VO引腳（引腳3）
 
 圖書館最初於2008年4月18日添加
 通過大衛·梅利斯
 圖書館於2009年7月5日修改
 由Limor Fried（http://www.ladyada.net）
 例子添加2009年7月9日
 湯姆·伊戈（Tom Igoe）
 於2010年11月22日修改
 湯姆·伊戈（Tom Igoe）
 於2016年11月7日修改
 通過阿圖羅·瓜達盧皮（Arturo Guadalupi）
 此示例代碼在公共領域。
 http://www.arduino.cc/en/Tutorial/LiquidCrystalHelloWorld
* /

//包含庫代碼：
＃包括 < LiquidCrystal.h >

//通過關聯任何所需的LCD接口引腳來初始化庫
//連接的arduino引腳號
const  int rs = 12，en = 11，d4 = 5，d5 = 4，d6 = 3，d7 = 2；
LiquidCrystal LCD（rs，en，d4，d5，d6，d7）;

無效 設置（）{
  //設置LCD的列數和行數：
  液晶顯示器 開始（16，2）;
  //在LCD上顯示一條消息。
  液晶顯示器 打印（“ I3，JIMIN！”）；
}

無效 循環（）{
  //將光標設置到第0列第1行
  //（注意：第1行是第二行，因為計數從0開始）：
  液晶顯示器 的setCursor（0，1）;
  //打印自重置以來的秒數：
  液晶顯示器 打印（21）;
}
