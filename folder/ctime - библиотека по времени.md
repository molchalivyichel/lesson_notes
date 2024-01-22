Как минимум, чтобы она работала, мы должны использовать ```#pragma warning(disable : 4996)```

# 1 Способ отображения времени сейчас

```
time_t current_time; 
tm* pcurrent_tm; 

time(&current_time); 
pcurrent_tm = localtime(&current_time);

cout << "Current time: " << asctime(pcurrent_tm) << endl;
```

# 2 Способ отображения времени сейчас

```
time_t seconds = time(NULL);
cout << "Current time 2: " << ctime(&seconds) << endl;
```

# Отображение времени по временным категориям

```
time_t seconds = time(NULL);
tm* LocalTime = localtime(&seconds);

cout << "year: " << 1900 + LocalTime->tm_year << endl; //год
cout << "month: " << 1 + LocalTime->tm_mon << endl; //месяц
cout << "day: " << LocalTime->tm_mday << endl; //день
cout << "Time: " << LocalTime->tm_hour; //часы
cout << " " << LocalTime->tm_min; //минуты
cout << " " << LocalTime->tm_sec << endl; //Секунды
```

# Создание таймера (мой вариант)

```
void Stopwatch_start(clock_t& const start_time) {
    start_time = clock();
    
}

double Stopwatch_end(clock_t& const start_time) {
    double elapsed_time = double(clock() - start_time) / CLOCKS_PER_SEC;
    return elapsed_time;
}

main() {
	clock_t start_time = 0;
	Stopwatch_start(start_time);
	double elapsed_time = Stopwatch_end(start_time);
}
```

# Временная задержка дальнейшего кода (Стоп кода на определенное время)

```
int Time_sleep(double end_time) {

    clock_t start_time = clock();
    double elapsed_time = double(clock() - start_time) / CLOCKS_PER_SEC;

    for (;;)
    {
        elapsed_time = double(clock() - start_time) / CLOCKS_PER_SEC;

        if (elapsed_time == end_time)
        {
            return 0;
        }
    }
}

main() {
	Time_sleep(5);
}
```

# clock() // получение текущего времени в виде количества секунд с эпохи.