; test2 make file for d.o. usage
core = "7.x"
api = "2"

; test2 core includes everything needed to power test2
projects[test2_core][version] = "1.x-dev"
projects[test2_core][subdir] = "contrib"
