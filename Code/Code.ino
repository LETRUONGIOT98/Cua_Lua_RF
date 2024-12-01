
int dong = 3; // Nối với chân OUT 1 của module RF
int mo = 4; // Nối vào chân OUT 2 của module RF
int dung = 6;
int ledPin = 7; //Led báo trạng thái
int hanhtrinhmo = 9; // Nối công tắc hành trình phía trong khi mở hết cửa sẽ dừng lại
int hanhtrinhdong = 10; // Nối công tắc hành trình phía ngoài khi đóng hết cửa sẽ dừng lại
 //Khai báo chân điều khiển động cơ
int relay = 11;
int out  = 12;

void setup() {
  pinMode(dong, INPUT);
  pinMode(mo, INPUT);
  pinMode(dung, INPUT);
  pinMode(hanhtrinhdong, INPUT_PULLUP);
  pinMode(hanhtrinhmo, INPUT_PULLUP);
  pinMode(hanhtrinhmo, INPUT_PULLUP);
  pinMode(out, OUTPUT);
  pinMode(relay,OUTPUT);

}
 
void loop() {
  set:
  //ĐÓNG  
  if (digitalRead(dong) == HIGH && digitalRead(dung) == LOW){
  digitalRead(relay, HIGH);
   digitalRead(relay, LOW);
