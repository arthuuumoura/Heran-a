#include <iostream>
#include "funcionarioregular.hpp"
#include "gerente.hpp"
#include "estagiario.hpp"

int main() {
    FuncionarioRegular funcionarioRegular("Arthur Moura", 23, 3500.00);
    Gerente gerente("Fernando Rosa", 22, 4000.00, 1000.00);
    Estagiario estagiario("Vitoria Costa", 40, 1200.00, 1000.00);

    std::cout << "Funcionário Regular: " << funcionarioRegular.calcularSalarioTotal() << std::endl;
    std::cout << "Gerente: " << gerente.calcularSalarioTotal() << std::endl;
    std::cout << "Estagiário: " << estagiario.calcularSalarioTotal() << std::endl;

    return 0;
}