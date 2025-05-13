import requests

for n in range(7000, 10000):
    response = requests.get(f"https://trainingserver.atec.pt/TrainingServer/Mulberry/JSON/Controls/Calendar/getCalendarDataSource.ashx?command=_SelectAllSchedulesDataSetGivenByUserId&oId={n}&idField=DataValueField&titleField=DataTextField&startDateField=DataStartField&endDateField=DataEndField&backgroundColorField=&textColorField=textcolor&eventColorField=color&description=description&picField=pic&urlField=url&start=1747004400&end=1747609200&_=1747127459882")
    if "Rogelio Manuel Nascimento Palma Rodrigues" in response.text and  "Sessao como Formador" in response.text:
        print(f"ID: ", n)