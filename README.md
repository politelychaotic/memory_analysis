# memory_analysis
Memory Analysis with GDB and C

## Heap Memory allocation and de-allocation

+ In this image we see that char_ptr gets assigned a memory address further down the heap than int_ptr after re-allocation

<img width="668" height="233" alt="image" src="https://github.com/user-attachments/assets/675bfd92-d051-415e-b59f-861bbc14d74b" /><br><br>

+ With an initial 100 bytes allocated, new memory allocation is still moving further down in the heap

<img width="672" height="234" alt="image" src="https://github.com/user-attachments/assets/50103e8e-8fe6-44f1-8088-af90e551c4ff" /><br><br>


+ When 1000 bytes are initially allocated to char_ptr, when it is re-allocated the memory address does not change

<img width="658" height="234" alt="image" src="https://github.com/user-attachments/assets/77c20205-5174-41e2-9226-db8f87d7aa64" /><br><br>


+ This allows us to get some insights in how this system manages heap memory, and when it decides to re-allocate a freed space of heap memory<br>

## Showing memory segments using variables defined with different methods
<img width="487" height="139" alt="Screenshot 2025-09-22 092000" src="https://github.com/user-attachments/assets/37c89270-bbc2-4e00-8ded-d34e15546cff" />
