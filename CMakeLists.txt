cmake_minimum_required(VERSION 3.14)
project(effective_cpp_example)

set(CMAKE_CXX_STANDARD 14)

#add_executable(effective_cpp_example main.cpp friend-example-01.cpp friend-example-02.cpp
#friend-example-03.cpp Power.cpp operator-example-01.cpp operator-example-02.cpp extends-example-01.cpp
#extends-example-02.cpp extends-example-03.cpp template-example-01.cpp template-example-02.cpp
#template-example-03.cpp template-example-04.cpp template-example-05.cpp template-example-06.cpp
#template-example-07 template-example-08.cpp stl-example-01.cpp stl-example-02.cpp stl-example-03
#stl-example-04.cpp stl-example-05.cpp auto-example.cpp lamdba-example-01.cpp lamdba-example-02.cpp
#lamdba-example-03.cpp lamdba-example-04.cpp lamdba-example-05.cpp
#20190718-01/main-01.cpp 20190718-01/person.cpp 20190718-01/adult.cpp 20190718-01/teanAger.cpp 20190718-01/child.cpp 20190718-01/main-02.cpp
#20190723/linkedlist/LinkedList.h 20190723/linkedlist/LinkedList.cpp 20190723/linkedlist/main.cpp
#20190723/linkedstack/LinkedStack.h 20190723/linkedstack/LinkedStack.cpp 20190723/linkedstack/main.cpp
#20190723/linkedqueue/LinkedQueue.h 20190723/linkedqueue/LinkedQueue.cpp 20190723/linkedqueue/main.cpp
#20190723/model/Student.h 20190723/model/Student.cpp 20190723/model/Node.h 20190723/model/Node.cpp
#20190724/singleton-example-01.cpp 20190724/singleton-example-02.cpp 20190724/singleton-example-03.cpp
#20190725/smart-pointer-example-01.cpp 20190725/smart-pointer-example-02.cpp 20190725/smart-pointer-example-03.cpp 20190725/smart-pointer-example-04.cpp
#stl-example/02_namespaces/namespaces.h stl-example/02_namespaces/namespaces.cpp stl-example/02_namespaces/usingnamespaces.cpp
#stl-example/04_typetest/typetest.cpp
#stl-example/08_AlternativeFunctionSyntax/AlternativeFunctionSyntax.cpp
#stl-example/09_NullPointerConstant/NullPointerConstant.cpp
#stl-example/11_Exceptions/Exceptions.cpp
#stl-example/12_ConstArg/ConstArg.cpp
#stl-example/14_vectortest/vectortest.cpp
#20190726/function-point-example-02.cpp
#20190726/io-example-01.cpp
#design-patterns/SRP.cpp design-patterns/OCP.cpp design-patterns/LSP.cpp design-patterns/ISP.cpp
#)

include_directories("/usr/local/Cellar/boost/1.70.0/include/boost")

add_executable(effective_cpp_example design-patterns/BoostDL.cpp)

#stl-example/13_AirlineTicket/AirlineTicket.h stl-example/13_AirlineTicket/AirlineTicket.cpp stl-example/13_AirlineTicket/AirlineTicketTest.cpp