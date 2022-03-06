This project is to build a database using cpp  

           					architecture of database
![architecture](https://www.sqlite.org/zipvfs/doc/trunk/www/arch1.gif "architecture") 

The first step is to build a front-end: tokenizer, parser and code generator.  
ideal: create a loop to print prompt and get any input from user 
```cpp
	InputBuffer inputBuffer;  
	while (true) {
		printPrompt();
		inputBuffer.readInput();
		processInput();
	}
```  
we define a class of inputBuffer  
```cpp
	class InputBuffer {
		std::string m_buff;
		void readInput(void); // read input to m_buff
		void processMetaInput(void); // process input 
	}
```
