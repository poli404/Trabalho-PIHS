str11 = "cola"
str12 = "bolo"
str21 = "careta"
str22 = "vareta"

print(f"Distância de Levenshtein entre '{str21}' e '{str22}':", levenshtein(str21, str22))
print(f"Distância de Levenshtein entre '{str11}' e '{str12}':", levenshtein(str11, str12))
print(f"Distância de Levenshtein entre '{str11}' e '{str21}':", levenshtein(str11, str21))
print(f"Distância de Levenshtein entre '{str22}' e '{str12}':", levenshtein(str22, str12))