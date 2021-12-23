int led = 8;
int interrupcao = 2; 
int estado; 
int ligado;
int desligado; 

void interrupt() {
  estado = !estado; 

  if(estado==true){
    ligado = 2000;
    desligado = 1000;
  }else{
    ligado = 5000;
    desligado = 25000; 
  }
  
}


void setup() {
  
  pinMode(led, OUTPUT);
  pinMode(interrupcao, INPUT_PULLUP);
  
  attachInterrupt(digitalPinToInterrupt(interrupcao), interrupt, FALLING);   
  
  estado = false;
  ligado = 2000; 
  desligado = 1000; 
                  
}                                                              

void loop(){
  
  digitalWrite(led, HIGH); 
  delay(ligado); 
  digitalWrite(led, LOW); 
  delay(desligado); 

}
