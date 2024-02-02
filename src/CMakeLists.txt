
message( STATUS ${CMAKE_CURRENT_BINARY_DIR} )

set( TP1_CPP_SRC tp1_cpp/Vegetal.cpp tp1_cpp/Arbre.cpp tp1_cpp/Fleur.cpp tp1_cpp/Champignon.cpp )
set( FENETRE_PRINCIPALE_SRC FenetrePrincipale/FenetrePrincipale.cpp FenetrePrincipale/module1_fichier2.cpp )
set( MODULE2_SRC module2/module2_fichier1.cpp )

add_library( src
             ${TP1_CPP_SRC}
             ${FENETRE_PRINCIPALE_SRC} ${MODULE2_SRC}
             resources/resource.qrc
           )

# target_include_directories( src . FenetrePrincipale module2 )
target_include_directories( src
  PUBLIC "." )

target_link_libraries( src PUBLIC Qt6::Widgets )

add_executable( ${PROJECT_NAME}
                main.cpp )

target_link_libraries( ${PROJECT_NAME} PRIVATE Qt6::Widgets Qt6::Core )
