#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <chrono>
#include "ordenacoes.h"


int main() {
    fstream sort_time_arq("../sort_time.txt", ios::out);

    sort_time_arq << "Tempos de execução do Insertion Sort (em ms):" << endl;
    sort_time_arq << arqSort("../instancias-num/num.1000.1.in", "../instancias-num-ord-ins/num.1000.1.in", 1) << endl;
    sort_time_arq << arqSort("../instancias-num/num.1000.2.in", "../instancias-num-ord-ins/num.1000.2.in", 1) << endl;
    sort_time_arq << arqSort("../instancias-num/num.1000.3.in", "../instancias-num-ord-ins/num.1000.3.in", 1) << endl;
    sort_time_arq << arqSort("../instancias-num/num.1000.4.in", "../instancias-num-ord-ins/num.1000.4.in", 1) << endl;
    sort_time_arq << arqSort("../instancias-num/num.10000.1.in", "../instancias-num-ord-ins/num.10000.1.in", 1) << endl;
    sort_time_arq << arqSort("../instancias-num/num.10000.2.in", "../instancias-num-ord-ins/num.10000.2.in", 1) << endl;
    sort_time_arq << arqSort("../instancias-num/num.10000.3.in", "../instancias-num-ord-ins/num.10000.3.in", 1) << endl;
    sort_time_arq << arqSort("../instancias-num/num.10000.4.in", "../instancias-num-ord-ins/num.10000.4.in", 1) << endl;
    sort_time_arq << arqSort("../instancias-num/num.100000.1.in", "../instancias-num-ord-ins/num.100000.1.in", 1) << endl;
    sort_time_arq << arqSort("../instancias-num/num.100000.2.in", "../instancias-num-ord-ins/num.100000.2.in", 1) << endl;
    sort_time_arq << arqSort("../instancias-num/num.100000.3.in", "../instancias-num-ord-ins/num.100000.3.in", 1) << endl;
    sort_time_arq << arqSort("../instancias-num/num.100000.4.in", "../instancias-num-ord-ins/num.100000.4.in", 1) << endl;
    
    sort_time_arq << "Tempos de execução do Selection Sort (em ms):" << endl;
    sort_time_arq << arqSort("../instancias-num/num.1000.1.in", "../instancias-num-ord-sel/num.1000.1.in", 2) << endl;
    sort_time_arq << arqSort("../instancias-num/num.1000.2.in", "../instancias-num-ord-sel/num.1000.2.in", 2) << endl;
    sort_time_arq << arqSort("../instancias-num/num.1000.3.in", "../instancias-num-ord-sel/num.1000.3.in", 2) << endl;
    sort_time_arq << arqSort("../instancias-num/num.1000.4.in", "../instancias-num-ord-sel/num.1000.4.in", 2) << endl;
    sort_time_arq << arqSort("../instancias-num/num.10000.1.in", "../instancias-num-ord-sel/num.10000.1.in", 2) << endl;
    sort_time_arq << arqSort("../instancias-num/num.10000.2.in", "../instancias-num-ord-sel/num.10000.2.in", 2) << endl;
    sort_time_arq << arqSort("../instancias-num/num.10000.3.in", "../instancias-num-ord-sel/num.10000.3.in", 2) << endl;
    sort_time_arq << arqSort("../instancias-num/num.10000.4.in", "../instancias-num-ord-sel/num.10000.4.in", 2) << endl;
    sort_time_arq << arqSort("../instancias-num/num.100000.1.in", "../instancias-num-ord-sel/num.100000.1.in", 2) << endl;
    sort_time_arq << arqSort("../instancias-num/num.100000.2.in", "../instancias-num-ord-sel/num.100000.2.in", 2) << endl;
    sort_time_arq << arqSort("../instancias-num/num.100000.3.in", "../instancias-num-ord-sel/num.100000.3.in", 2) << endl;
    sort_time_arq << arqSort("../instancias-num/num.100000.4.in", "../instancias-num-ord-sel/num.100000.4.in", 2) << endl;
        
}