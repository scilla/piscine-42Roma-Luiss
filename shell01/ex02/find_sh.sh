find . -name "*.sh" -type f  | grep -o '[^/]*$' | sed 's/.sh$//'
