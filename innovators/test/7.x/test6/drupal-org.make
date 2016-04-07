; test6 make file for d.o. usage
core = "7.x"
api = "2"

; test6 core includes everything needed to power test6
projects[test6_core][version] = "1.x-dev"
projects[test6_core][subdir] = "contrib"
