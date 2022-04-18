
const pin_t MY_LED = D7;


SYSTEM_THREAD(ENABLED);


void setup()
{
	pinMode(MY_LED, OUTPUT);
}

void loop()
{
	
//M  (--)
  digitalWrite(MY_LED, HIGH);   
  delay(1s);                       
  digitalWrite(MY_LED, LOW);    
  delay(500ms);                     
  digitalWrite(MY_LED, HIGH);   
  delay(1s);                       
  digitalWrite(MY_LED, LOW);    
  delay(2s);                     

//I  (..)
  digitalWrite(MY_LED, HIGH);   
  delay(500ms);                       
  digitalWrite(MY_LED, LOW);    
  delay(500ms);                     
  digitalWrite(MY_LED, HIGH);   
  delay(500ms);                       
  digitalWrite(MY_LED, LOW);    
  delay(2s); 

  //C (-.-.)
  digitalWrite(MY_LED, HIGH);   
  delay(1s);                       
  digitalWrite(MY_LED, LOW);    
  delay(500ms);                     
  digitalWrite(MY_LED, HIGH);   
  delay(500ms);                       
  digitalWrite(MY_LED, LOW);    
  delay(500ms);   
  digitalWrite(MY_LED, HIGH);   
  delay(1s);                       
  digitalWrite(MY_LED, LOW);    
  delay(500ms);                     
  digitalWrite(MY_LED, HIGH);   
  delay(500ms);                       
  digitalWrite(MY_LED, LOW);    
  delay(2s);	

//H  (....)
  digitalWrite(MY_LED, HIGH);   
  delay(500ms);                       
  digitalWrite(MY_LED, LOW);    
  delay(500ms);                     
  digitalWrite(MY_LED, HIGH);   
  delay(500ms);                       
  digitalWrite(MY_LED, LOW);    
  delay(500ms);	
  digitalWrite(MY_LED, HIGH);   
  delay(500ms);                       
  digitalWrite(MY_LED, LOW);    
  delay(500ms);                     
  digitalWrite(MY_LED, HIGH);   
  delay(500ms);                       
  digitalWrite(MY_LED, LOW);    
  delay(2s);

//A  (.-)
  digitalWrite(MY_LED, HIGH);   
  delay(500ms);                       
  digitalWrite(MY_LED, LOW);    
  delay(500ms);                     
  digitalWrite(MY_LED, HIGH);   
  delay(1s);                       
  digitalWrite(MY_LED, LOW);    
  delay(2s);   

//E  (.)
  digitalWrite(MY_LED, HIGH);   
  delay(500ms);                       
  digitalWrite(MY_LED, LOW);    
  delay(2s);                     

//L  (.-..)
  digitalWrite(MY_LED, HIGH);   
  delay(500ms);                       
  digitalWrite(MY_LED, LOW);    
  delay(500ms);                     
  digitalWrite(MY_LED, HIGH);   
  delay(1s);                       
  digitalWrite(MY_LED, LOW);    
  delay(500ms); 
  digitalWrite(MY_LED, HIGH);   
  delay(500ms);                       
  digitalWrite(MY_LED, LOW);    
  delay(500ms);
  digitalWrite(MY_LED, HIGH);   
  delay(500ms);                       
  digitalWrite(MY_LED, LOW);    
  delay(4s);
	
}