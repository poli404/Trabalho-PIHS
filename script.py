str11 = "cola"
str12 = "bolo"
str21 = "careta"
str22 = "vareta"

print(f"Distância de Levenshtein entre '{str11}' e '{str11}':", levenshtein(str11, str11)) # 0 - mesma palavra
print(f"Distância de Levenshtein entre '{str21}' e '{str22}':", levenshtein(str21, str22)) # 1
print(f"Distância de Levenshtein entre '{str11}' e '{str12}':", levenshtein(str11, str12)) # 2
print(f"Distância de Levenshtein entre '{str11}' e '{str21}':", levenshtein(str11, str21)) # 4
print(f"Distância de Levenshtein entre '{str12}' e '{str22}':", levenshtein(str12, str22)) # 6 - todas as letras mudam