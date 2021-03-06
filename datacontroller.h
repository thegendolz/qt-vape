#include "surfacegraph.h"
#include "scattergraph.h"


#ifndef DATACONTROLLER_H
#define DATACONTROLLER_H


class DataController
{
public:
    DataController(SurfaceGraph *surfaceGraph);
    void setView(char type);
    void setData(QSurfaceDataArray *dataArray);
    void setDataSurfaceGraph(QSurfaceDataArray *dataArray);
    void setDataScatterGraph(QScatterDataArray *dataArray);
    SurfaceGraph* getSurfaceGraph();
    ScatterGraph* getScatterGraph();
private:
    SurfaceGraph *surfaceGraph;
    ScatterGraph *scatterGraph;
    QWidget *container;
    char viewType;
};

#endif // DATACONTROLLER_H
