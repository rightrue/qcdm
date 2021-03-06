/**
* LICENSE PLACEHOLDER
*
* @file qcdm_efs_file_read_worker.cpp
* @class QcdmEfsFileReadWorker
* @package openpst/qcdm
* @brief Handles background processing of file reading
*
* @author Gassan Idriss <ghassani@gmail.com>
*/

#include "worker/qcdm_efs_file_read_worker.h"

using namespace OpenPST;

QcdmEfsFileReadWorker::QcdmEfsFileReadWorker(DmEfsManager& efsManager, QcdmEfsFileReadWorkerRequest request, QObject *parent) :
    efsManager(efsManager),
    request(request),
    QThread(parent),
    cancelled(false)
{

}

QcdmEfsFileReadWorker::~QcdmEfsFileReadWorker()
{

}

void QcdmEfsFileReadWorker::cancel()
{
    cancelled = true;
}

void QcdmEfsFileReadWorker::run()
{
    return;
}