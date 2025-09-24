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


<img width="620" height="87" alt="image" src="https://github.com/user-attachments/assets/844b42ce-6018-47dd-9292-03ea2ee433b3" />

<img width="635" height="324" alt="image" src="https://github.com/user-attachments/assets/b962f4de-7e4f-4615-86fe-63764bc68a78" />
<img width="641" height="239" alt="image" src="https://github.com/user-attachments/assets/1a527f55-d4f6-4275-9ae4-829ab5e09658" />
<img width="1057" height="482" alt="image" src="https://github.com/user-attachments/assets/4732e5e7-4c86-49fe-8091-471804a566fa" />
<img width="1026" height="497" alt="image" src="https://github.com/user-attachments/assets/a3feaed3-718d-4c65-8081-b3218f206ebe" />
<img width="916" height="461" alt="image" src="https://github.com/user-attachments/assets/49b178e6-c3f3-46a0-bae4-0b6afbff6485" />
<img width="563" height="168" alt="image" src="https://github.com/user-attachments/assets/edc59fea-5707-4c73-b482-4dfc34b82dba" />
<img width="599" height="111" alt="image" src="https://github.com/user-attachments/assets/06ed9c9a-9dbf-453e-9773-025f3623ecc6" />
