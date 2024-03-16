
add_library( base )

target_sources( base
  PRIVATE
    tp1_cpp/Vegetal.cpp tp1_cpp/Arbre.cpp tp1_cpp/Fleur.cpp tp1_cpp/Champignon.cpp
)
target_sources( base
  PRIVATE
		tp1_cpp/strategie/Dormance.cpp tp1_cpp/strategie/CroissancePrintaniere.cpp tp1_cpp/strategie/CroissanceEstivale.cpp tp1_cpp/strategie/Secheresse.cpp
)
target_sources( base
  PRIVATE
	tp1_cpp/Terrain.cpp tp1_cpp/fabrique/FabriqueBase.cpp
)
target_sources( base
  PRIVATE
	tp1_cpp/adapteur/AdapteurChampi.cpp tp1_cpp/fabrique/FabriqueExterne.cpp
)
target_sources( base
  PRIVATE
    FenetrePrincipale/FenetrePrincipale.cpp FenetrePrincipale/module1_fichier2.cpp
)
target_sources( base
  PRIVATE
    module2/module2_fichier1.cpp
)

target_sources( base
  PRIVATE
    resources/resource.qrc
)

# target_include_directories( base . FenetrePrincipale module2 )
target_include_directories( base
  PUBLIC "." )

target_link_libraries( base PUBLIC Qt5::Widgets )

add_executable( ${PROJECT_NAME}
                main.cpp )

target_link_libraries( ${PROJECT_NAME} PRIVATE base Qt5::Widgets Qt5::Core )
