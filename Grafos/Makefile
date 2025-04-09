# Nome do arquivo principal
MAIN = main.py

# Alvo padrão
all:
	@echo "Use 'make run' para executar o programa."

# Executa o programa
run:
	python3 $(MAIN)

# Limpa arquivos temporários (caso existam)
clean:
	find . -type f -name '*.pyc' -delete
	find . -type d -name '__pycache__' -exec rm -r {} +

# Verifica estilo de código com flake8 (opcional)
lint:
	flake8 *.py

.PHONY: all run clean lint
