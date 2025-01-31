

int lzr_1 = 8;
int lzr_2 = 9;
void setup() {
  pinMode(lzr_1, INPUT);
  pinMode(lzr_2, INPUT); 
}


void loop() {
  pinMode(lzr_2, OUTPUT);  
  digitalWrite(lzr_2, LOW);   
  pinMode(lzr_1, INPUT);
  delay(1200);  
  pinMode(lzr_1, OUTPUT);  
  digitalWrite(lzr_1, LOW); 
  pinMode(lzr_2, INPUT);                
 delay(1200);                      
}
