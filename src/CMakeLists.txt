
add_library( src )

target_sources( src
  PRIVATE
    tp1_cpp/Vegetal.cpp tp1_cpp/Arbre.cpp tp1_cpp/Fleur.cpp tp1_cpp/Champignon.cpp
)
target_sources( src
  PRIVATE
    FenetrePrincipale/FenetrePrincipale.cpp FenetrePrincipale/module1_fichier2.cpp
)
target_sources( src
  PRIVATE
    module2/module2_fichier1.cpp
)

target_sources( src
  PRIVATE
    resources/resource.qrc
)

# target_include_directories( src . FenetrePrincipale module2 )
target_include_directories( src
  PUBLIC "." )

target_link_libraries( src PUBLIC Qt6::Widgets )

add_executable( ${PROJECT_NAME}
                main.cpp )

target_link_libraries( ${PROJECT_NAME} PRIVATE src Qt6::Widgets Qt6::Core )
