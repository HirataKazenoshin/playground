import shutil

file_name = "sample.txt"

back_name = file_name + ".bak"
shutil.copy(file_name, back_name)

with open(file_name, encoding="UTF-8") as f:
    data_lines = f.read()

with open(file_name, mode="w", encoding="UTF-8") as f:
    f.write(data_lines)

