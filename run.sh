echo "Compiling c++ files..."
g++  -Wall -I/usr/include/cppconn -o Main *.cc *.h -L/usr/lib -lmysqlcppconn
echo "Running byte code..."
./Main
