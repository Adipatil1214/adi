from graphviz import Digraph

# Initialize the ER diagram
er = Digraph("ParkingDB", format="png")
er.attr(bgcolor="white")
er.attr("node", shape="rectangle", style="filled", color="lightblue", fontname="Arial", fontsize="12")

# Entities
er.node("User", "User\n- user_no (PK)\n- name\n- phone_no\n- email")
er.node("Vehicle", "Vehicle\n- vehicle_no (PK)\n- license_plate\n- user_no (FK)")
er.node("Parking_Spot", "Parking_Spot\n- spot_no (PK)\n- floor_no\n- is_occupied\n- vehicle_no (FK)\n- start_time\n- end_time")

# Relationships
er.attr("edge", arrowhead="normal", fontsize="10")

# User to Vehicle (1 to 1)
er.edge("User", "Vehicle", label="1 owns 1", constraint="true")

# Vehicle to Parking_Spot (1 to 1)
er.edge("Vehicle", "Parking_Spot", label="1 occupies 1", constraint="true")

# Parking_Spot to Vehicle (1 to 1)
er.edge("Parking_Spot", "Vehicle", label="References", style="dashed")

# Render the diagram
er_path = '/mnt/data/parking_db_er'
er.view()
er_path + ".png"